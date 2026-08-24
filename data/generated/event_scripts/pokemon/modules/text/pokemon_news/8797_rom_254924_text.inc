	@ data/text/pokemon_news.inc:85 gPokeNewsTextLilycove_Upcoming
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gPokeNewsTextLilycove_Upcoming
gPokeNewsTextLilycove_Upcoming: @ 0x08254924
	.string "こんにちは\n『ポケモン ニュース』の じかんです\pミナモシティの デパートから\nステキな ニュースが はいってきました\pあと {STR_VAR_1}にちしたら デパートで\nほりだしものいちが はじまります!\pあなたの ほしかった あんなものや\nこんなものが みつかるかも しれません\pいじょう\n『ポケモン ニュース』でした"
	.byte EOS
	.if (. - gPokeNewsTextLilycove_Upcoming) != 0x99
	.error "gPokeNewsTextLilycove_Upcoming must retain its original byte length"
	.endif
