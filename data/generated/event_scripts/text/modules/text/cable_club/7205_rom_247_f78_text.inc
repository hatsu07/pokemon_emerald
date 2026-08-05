	@ data/text/cable_club.inc:111 CableClub_Text_OtherTrainerNotReady
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_247F78
gText_Rom_247F78: @ 0x08247F78
	.string "あいての じゅんびが\nできていません$"
	.if (. - gText_Rom_247F78) != 0x13
	.error "gText_Rom_247F78 must retain its original byte length"
	.endif
