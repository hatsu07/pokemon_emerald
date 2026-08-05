	@ data/text/cable_club.inc:222 MossdeepCity_GameCorner_1F_Text_LeavingDoComeAgain
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2483BB
gText_Rom_2483BB: @ 0x082483BB
	.string "きょうは かえるのかい?\nまた おいでね$"
	.if (. - gText_Rom_2483BB) != 0x15
	.error "gText_Rom_2483BB must retain its original byte length"
	.endif
