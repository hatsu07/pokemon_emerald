	@ data/text/pokemon_news.inc:71 gPokeNewsTextGameCorner_Ending
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_254876
gText_Rom_254876: @ 0x08254876
	.string "こんにちは\n『ポケモン ニュース』の じかんです\pついに きた!\nきて しまいました!\pゲームコーナーの サービスデーが\nきて しまいました!!\pきょうなら スロットも ルーレットも\nあなたに ほほえんで くれるかも!?\pさあ! おわりが ちかく なってきました\nはやく キンセツシティに いそぎましょう!\pいじょう\n『ポケモン ニュース』でした"
	.byte EOS
	.if (. - gText_Rom_254876) != 0xae
	.error "gText_Rom_254876 must retain its original byte length"
	.endif
