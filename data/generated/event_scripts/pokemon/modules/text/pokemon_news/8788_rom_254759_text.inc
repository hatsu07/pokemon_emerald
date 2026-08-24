	@ data/text/pokemon_news.inc:45 gPokeNewsTextGameCorner_Upcoming
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gPokeNewsTextGameCorner_Upcoming
gPokeNewsTextGameCorner_Upcoming: @ 0x08254759
	.string "こんにちは\n『ポケモン ニュース』の じかんです\pついに きます!\nきて しまいます\pゲームコーナーの サービスデーが\nあと {STR_VAR_1}にちで きて しまいます!\pひごろ うんのない あなたも\nこのひ だけは ラッキーに!\pいじょう\n『ポケモン ニュース』でした"
	.byte EOS
	.if (. - gPokeNewsTextGameCorner_Upcoming) != 0x81
	.error "gPokeNewsTextGameCorner_Upcoming must retain its original byte length"
	.endif
