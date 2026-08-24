	@ data/text/pokemon_news.inc:57 gPokeNewsTextGameCorner_Ongoing
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gPokeNewsTextGameCorner_Ongoing
gPokeNewsTextGameCorner_Ongoing: @ 0x082547DA
	.string "こんにちは\n『ポケモン ニュース』の じかんです\pついに きた!\nきて しまいました!\pゲームコーナーの サービスデーが\nきて しまいました!!\pきょうなら スロットも ルーレットも\nあなたに ほほえんで くれるかも!?\pさあ はやく\nキンセツシティに いそぎましょう!\pいじょう\n『ポケモン ニュース』でした"
	.byte EOS
	.if (. - gPokeNewsTextGameCorner_Ongoing) != 0x9c
	.error "gPokeNewsTextGameCorner_Ongoing must retain its original byte length"
	.endif
