	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:754 BattleFrontier_BattlePikeRoomNormal_Text_ImThePikeQueen
	.globl gText_Rom_234EED
gText_Rom_234EED: @ 0x08234EED
	.string "あたしは アザミ……\nここの あるじ…… チューブクイーン……\p…… まあ わかると おもうけど\nあたしを たおさなきゃ\lこのさき すすめないよ……\p…… おしゃべりは すきじゃ ないからね\nさっさと かかっといで……"
	.byte EOS
	.if (. - gText_Rom_234EED) > 0x6e
	.error "gText_Rom_234EED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234EED) < 0x6e
	.space 0x6e - (. - gText_Rom_234EED)
	.endif
