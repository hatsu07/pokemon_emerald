	@ data/text/match_call.inc:625 MatchCall_Text_Roxanne_Preparing
	.globl gText_Rom_269EA8
gText_Rom_269EA8: @ 0x08269EA8
	.string "ツツジ『あら {PLAYER}さん!\pあれから また トレーニングを\nやりなおして いるところ なんですよ!\pまた ジムを さいかい するためには\nもうすこし じかんが かかりますが\pもし ジムを さいかい できたら\nぜひまた ちょうせん してくださいね……"
	.byte EOS
	.if (. - gText_Rom_269EA8) > 0x7c
	.error "gText_Rom_269EA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269EA8) < 0x7c
	.space 0x7c - (. - gText_Rom_269EA8)
	.endif
