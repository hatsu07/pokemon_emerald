	@ data/text/apprentice.inc:193 gText_ApprenticePleaseTeach12
	.globl gText_Rom_26E3F7
gText_Rom_26E3F7: @ 0x0826E3F7
	.string "ヒャホー {PLAYER}さんじゃなーい!?\nどうする オレ? はなしかけてみる!?\lってもう はなし してるよ!!\pって {PLAYER}さん あきれてる!?\nしかたねー じこしょうかい してみる!?\pオスっ オレっ {STR_VAR_1}!\nポケモン ギタリストかいの 1ばんぼしさ!\pって きいてる!? きいてる!!\nついでに たのみごと してみる!?\pあの {PLAYER}さん!\nオレを {PLAYER}さんの でしに して!"
	.byte EOS
	.if (. - gText_Rom_26E3F7) > 0xba
	.error "gText_Rom_26E3F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E3F7) < 0xba
	.space 0xba - (. - gText_Rom_26E3F7)
	.endif
