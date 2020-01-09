# first two digits of version
%define release_version %(echo %{version} | awk -F. '{print $1"."$2}')

Name:           compat-grilo02
Version:        0.2.12
Release:        1%{?dist}
Summary:        Compat package with grilo 0.2 libraries

Group:          Applications/Multimedia
License:        LGPLv2+
Source0:        http://ftp.gnome.org/pub/GNOME/sources/grilo/%{release_version}/grilo-%{version}.tar.xz
Url:            http://live.gnome.org/Grilo

BuildRequires:  chrpath
BuildRequires:  gettext-devel
BuildRequires:  gnome-common
BuildRequires:  intltool
BuildRequires:  vala-devel >= 0.7.2
BuildRequires:  vala-tools >= 0.7.2
BuildRequires:  gtk-doc
BuildRequires:  gobject-introspection-devel >= 0.9.0
BuildRequires:  libxml2-devel
BuildRequires:  libsoup-devel
BuildRequires:  glib2-devel
# For the test UI
BuildRequires:  gtk3-devel
BuildRequires:  liboauth-devel
BuildRequires:  totem-pl-parser-devel

BuildRequires:  autoconf automake libtool gnome-common
Patch0:         grilo-0.2.12-vala-revert.patch
Patch1:         grilo-0.2.12-pre.patch

# Explicitly conflict with older grilo packages that ship libraries
# with the same soname as this compat package
Conflicts: grilo < 0.3.0

%description
Compatibility package with grilo 0.2 librarires.

%prep
%setup -q -n grilo-%{version}
%patch0 -p1 -b .vala-revert
%patch1 -p1 -b .bug-fixes

%build
autoreconf -f
%configure                      \
        --enable-vala           \
        --enable-gtk-doc        \
        --enable-introspection  \
        --enable-grl-net        \
        --disable-debug          \
        --disable-tests

make %{?_smp_mflags}

%install
make install DESTDIR=$RPM_BUILD_ROOT

# Remove files that will not be packaged
rm -f $RPM_BUILD_ROOT%{_libdir}/*.la
rm -f $RPM_BUILD_ROOT%{_libdir}/*.a

rm -rf $RPM_BUILD_ROOT%{_bindir}
rm -rf $RPM_BUILD_ROOT%{_includedir}
rm -rf $RPM_BUILD_ROOT%{_libdir}/girepository-1.0/
rm -rf $RPM_BUILD_ROOT%{_libdir}/pkgconfig/
rm -rf $RPM_BUILD_ROOT%{_libdir}/*.so
rm -rf $RPM_BUILD_ROOT%{_datadir}

%post -p /sbin/ldconfig

%postun -p /sbin/ldconfig

%files
%license COPYING
%{_libdir}/*.so.*

%changelog
* Thu Oct 20 2016 Kalev Lember <klember@redhat.com> - 0.2.12-1
- Initial grilo 0.2 compat package
