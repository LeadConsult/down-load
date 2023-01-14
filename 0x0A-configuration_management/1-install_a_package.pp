# install flask from pip3 using Puppet

exec {'install flask':
  command => '/usr/bin/pip3 install flask==2.1.0'
}
