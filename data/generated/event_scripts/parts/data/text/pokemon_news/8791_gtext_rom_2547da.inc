	@ data/text/pokemon_news.inc:57 gPokeNewsTextGameCorner_Ongoing
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2547DA
gText_Rom_2547DA: @ 0x082547DA
	.string "こんにちは\n『ポケモン ニュース』の じかんです\pついに きた!\nきて しまいました!\pゲームコーナーの サービスデーが\nきて しまいました!!\pきょうなら スロットも ルーレットも\nあなたに ほほえんで くれるかも!?\pさあ はやく\nキンセツシティに いそぎましょう!\pいじょう\n『ポケモン ニュース』でした"
	.byte EOS
	.if (. - gText_Rom_2547DA) != 0x9c
	.error "gText_Rom_2547DA must retain its original byte length"
	.endif
