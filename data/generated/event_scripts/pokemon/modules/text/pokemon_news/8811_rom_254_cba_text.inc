	@ data/text/pokemon_news.inc:156 gPokeNewsTextBlendMaster_Ending
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gPokeNewsTextBlendMaster_Ending
gPokeNewsTextBlendMaster_Ending: @ 0x08254CBA
	.string "こんにちは\n『ポケモン ニュース』の じかんです\pすごい! すごすぎます!!\pきのみブレンダーが ものすごい スピードで\nまわっています!\pブレンドめいじんは やっぱり すごいです!\pめいじんの ワザを みていない みなさん!\nもうすぐ めいじんは かえってしまいます!\lいますぐ ミナモシティに いきましょう!\pいじょう\n『ポケモン ニュース』でした"
	.byte EOS
	.if (. - gPokeNewsTextBlendMaster_Ending) != 0xb1
	.error "gPokeNewsTextBlendMaster_Ending must retain its original byte length"
	.endif
