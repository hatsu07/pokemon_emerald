	@ data/maps/LavaridgeTown/scripts.inc:306 LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad
	.globl gText_Rom_1E5AB6
gText_Rom_1E5AB6: @ 0x081E5AB6
	.string "ユウキ『それを もっていれば\n111ばん どうろの さばくに はいれるよ\pさばくにしか いない\nポケモンも いるはず だから\lよかったら いけば……?\pオレは……\nトウカの ジムリーダー センリさんに\lちょうせん してみようかな……\p{PLAYER}の とうさん\n{PLAYER}と ちがって つよそうだからな\pじゃな!{EOS}"
	.if (. - gText_Rom_1E5AB6) > 0x95
	.error "gText_Rom_1E5AB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5AB6) < 0x95
	.space 0x95 - (. - gText_Rom_1E5AB6)
	.endif
