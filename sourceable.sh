#!/bin/sh
root=~/void-packages/void-packages
alias main="git checkout main"
alias dev="git checkout develop"
sw () {
	git checkout $1
}

alias bd="$root/xbps-src pkg"
alias hm="cd $root"
alias hbd="$root/xbps-src zap; $root/xbps-src binary-bootstrap; $root/xbps-src pkg"
alias zap="$root/xbps-src zap"
