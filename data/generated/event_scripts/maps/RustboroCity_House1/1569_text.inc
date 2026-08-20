	@ data/maps/RustboroCity_House1/scripts.inc:33 RustboroCity_House1_Text_IllTradeIfYouWant
	.globl gText_Rom_203C72
gText_Rom_203C72: @ 0x08203C72
	.string "え?\nぼくの ポケモンが かわいい?\lウン しってるよー\pあっ どうしても って いうなら\nこうかん して あげても いいよ\pじゃあ ぼくの {STR_VAR_2}\n{STR_VAR_1} となら こうかん するよ{EOS}"
	.if (. - gText_Rom_203C72) > 0x5a
	.error "gText_Rom_203C72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203C72) < 0x5a
	.space 0x5a - (. - gText_Rom_203C72)
	.endif
