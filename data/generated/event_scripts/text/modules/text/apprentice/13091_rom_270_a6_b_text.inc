	@ data/text/apprentice.inc:553 gText_ApprenticeWhichMonFirst12
	.globl gText_Rom_270A6B
gText_Rom_270A6B: @ 0x08270A6B
	.string "ヤァーフゥー {PLAYER}さんじゃーん?\nどうする オレ? アレきいてみる!?\lそうだんが あるんだけど きいてェ!\lって きいてる!? きいてる!!\pオレの ポケモンの うち どいつを\nさいしょに だしたら いいか きめてエェ!"
	.byte EOS
	.if (. - gText_Rom_270A6B) > 0x70
	.error "gText_Rom_270A6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270A6B) < 0x70
	.space 0x70 - (. - gText_Rom_270A6B)
	.endif
