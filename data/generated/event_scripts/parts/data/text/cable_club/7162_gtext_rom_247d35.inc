	@ data/text/cable_club.inc:51 Text_SomeoneIsNotReadyToLink
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_247D35
gText_Rom_247D35: @ 0x08247D35
	.string "おともだちの じゅんびが\nできて いない ようです\pじゅんびが できましたら\nまた おこしください$"
	.if (. - gText_Rom_247D35) != 0x32
	.error "gText_Rom_247D35 must retain its original byte length"
	.endif
