	@ data/text/pokemon_news.inc:156 gPokeNewsTextBlendMaster_Ending
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_254CBA
gText_Rom_254CBA: @ 0x08254CBA
	.string "こんにちは\n『ポケモン ニュース』の じかんです\pすごい! すごすぎます!!\pきのみブレンダーが ものすごい スピードで\nまわっています!\pブレンドめいじんは やっぱり すごいです!\pめいじんの ワザを みていない みなさん!\nもうすぐ めいじんは かえってしまいます!\lいますぐ ミナモシティに いきましょう!\pいじょう\n『ポケモン ニュース』でした"
	.byte EOS
	.if (. - gText_Rom_254CBA) != 0xb1
	.error "gText_Rom_254CBA must retain its original byte length"
	.endif
