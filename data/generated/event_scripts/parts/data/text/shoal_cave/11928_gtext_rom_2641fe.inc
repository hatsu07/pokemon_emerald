	@ data/text/shoal_cave.inc:41 ShoalCave_LowTideEntranceRoom_Text_NoSpaceInYourBag
	.globl gText_Rom_2641FE
gText_Rom_2641FE: @ 0x082641FE
	.string "つくっても バッグが いっぱいで\nもてない ようだね……\pせいりして また くると いいよ$"
	.if (. - gText_Rom_2641FE) > 0x2e
	.error "gText_Rom_2641FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2641FE) < 0x2e
	.space 0x2e - (. - gText_Rom_2641FE)
	.endif
