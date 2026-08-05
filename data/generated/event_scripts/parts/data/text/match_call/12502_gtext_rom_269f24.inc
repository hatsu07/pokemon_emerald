	@ data/text/match_call.inc:628 MatchCall_Text_Roxanne_PreparingPostGame
	.globl gText_Rom_269F24
gText_Rom_269F24: @ 0x08269F24
	.string "ツツジ『{PLAYER}さん おめでとう!\nうわさは ききましたよ!\pこちらは ジムを さいかい するためには\nもうすこし じかんが かかりますが\pもし ジムを さいかい できたら\nぜひまた ちょうせん してくださいね……"
	.byte EOS
	.if (. - gText_Rom_269F24) > 0x6a
	.error "gText_Rom_269F24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269F24) < 0x6a
	.space 0x6a - (. - gText_Rom_269F24)
	.endif
