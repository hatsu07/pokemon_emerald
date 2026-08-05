	@ data/text/pokemon_news.inc:97 gPokeNewsTextLilycove_Ongoing (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_254A53
gText_Rom_254A53: @ 0x08254A53
	.string "こんにちは\n『ポケモン ニュース』の じかんです\pおまたせ しました!\pきょう ついに ミナモ デパートで\nほりだしものいちが かいさい されました\pあなたが ゆめにまでみた\nあんなものや こんなもの との\pうんめいの であいが\nまってるかも しれませんよ!\pいじょう\n『ポケモン ニュース』でした"
	.byte EOS
	.if (. - gText_Rom_254A53) != 0x96
	.error "gText_Rom_254A53 must retain its original byte length"
	.endif
