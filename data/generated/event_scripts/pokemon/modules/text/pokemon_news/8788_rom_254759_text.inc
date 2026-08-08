	@ data/text/pokemon_news.inc:45 gPokeNewsTextGameCorner_Upcoming
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_254759
gText_Rom_254759: @ 0x08254759
	.string "こんにちは\n『ポケモン ニュース』の じかんです\pついに きます!\nきて しまいます\pゲームコーナーの サービスデーが\nあと {STR_VAR_1}にちで きて しまいます!\pひごろ うんのない あなたも\nこのひ だけは ラッキーに!\pいじょう\n『ポケモン ニュース』でした"
	.byte EOS
	.if (. - gText_Rom_254759) != 0x81
	.error "gText_Rom_254759 must retain its original byte length"
	.endif
