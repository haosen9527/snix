- add key
  ``` shell
  sudo apt-key adv --keyserver keyserver.ubuntu.com --recv-keys BA300B7755AFCFAE
  ```
  or
  ``` shell
  wget -qO - https://typora.io/linux/public-key.asc | sudo apt-key add -
  ```

- add Typora`s repository

  ``` shell
  sudo add-apt-repository 'deb https://typora.io/linux ./'
  sudo apt-get update
  ```
- install typora
  ``` shell
  sudo apt-get install typora
  ```
  

