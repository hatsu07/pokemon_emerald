	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:273 BattleFrontier_OutsideEast_Text_DidScottBringYouHere
	.globl gText_Rom_222DF5
gText_Rom_222DF5: @ 0x08222DF5
	.string "あんたも エニシダさんに\nつれて こられたの?\lあのひと なんなんだろうね\pつよい トレーナーを みぬく めは\nたしからしい けど……\lほんにんが たたかって いる ところは\lいちども みたことが ないんだよなあ$"
	.if (. - gText_Rom_222DF5) > 0x6b
	.error "gText_Rom_222DF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222DF5) < 0x6b
	.space 0x6b - (. - gText_Rom_222DF5)
	.endif
