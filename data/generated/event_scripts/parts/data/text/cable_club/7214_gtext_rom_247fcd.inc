	@ data/text/cable_club.inc:131 CableClub_Text_AdapterNotConnected
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_247FCD
gText_Rom_247FCD: @ 0x08247FCD
	.string "ワイヤレスアダプタが\nつながって いません$"
	.if (. - gText_Rom_247FCD) != 0x16
	.error "gText_Rom_247FCD must retain its original byte length"
	.endif
