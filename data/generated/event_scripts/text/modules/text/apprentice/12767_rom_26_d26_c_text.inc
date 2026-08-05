	@ data/text/apprentice.inc:73 gText_ApprenticePleaseTeach2
	.globl gText_Rom_26D26C
gText_Rom_26D26C: @ 0x0826D26C
	.string "あの…… {PLAYER}さん ですか!?\nぼく {STR_VAR_1} って いいます!\pぼく ポケモントレーナーに なりたいんだけど\nどうすれば いいのか わからなくて……\pそれで ゆうめいな {PLAYER}さんに\nどうすれば いいのか きいてみようと\lおもったんです!\pそうだんに のって もらえますか?"
	.byte EOS
	.if (. - gText_Rom_26D26C) > 0x88
	.error "gText_Rom_26D26C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D26C) < 0x88
	.space 0x88 - (. - gText_Rom_26D26C)
	.endif
