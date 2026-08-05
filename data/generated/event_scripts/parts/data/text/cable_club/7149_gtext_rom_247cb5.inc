	@ data/text/cable_club.inc:35 gText_ConfirmStartLinkWithXPlayers
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_247CB5
gText_Rom_247CB5: @ 0x08247CB5
	.string "{STR_VAR_1}にんで つうしんを はじめます\nAボタン…けってい Bボタン…もどる$"
	.if (. - gText_Rom_247CB5) != 0x25
	.error "gText_Rom_247CB5 must retain its original byte length"
	.endif
