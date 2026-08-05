	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:763 BattleFrontier_BattlePikeRoomNormal_Text_HopeYouDidntUseUpLuck
	.globl gText_Rom_234F5B
gText_Rom_234F5B: @ 0x08234F5B
	.string "あんたの うん……\nここで つきなきゃ いい けどね……"
	.byte EOS
	.if (. - gText_Rom_234F5B) > 0x1d
	.error "gText_Rom_234F5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234F5B) < 0x1d
	.space 0x1d - (. - gText_Rom_234F5B)
	.endif
