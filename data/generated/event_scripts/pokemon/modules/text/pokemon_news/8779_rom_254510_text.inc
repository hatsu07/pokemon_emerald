	@ data/text/pokemon_news.inc:2 gPokeNewsTextSlateport_Upcoming
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gPokeNewsTextSlateport_Upcoming
gPokeNewsTextSlateport_Upcoming: @ 0x08254510
	.string "こんにちは\n『ポケモン ニュース』の じかんです\pカイナシティの いちばの にんきもの\nがんばりやさんが あと {STR_VAR_1}にち したら\lものすごく がんばるそうです!\pなにを がんばるのか わかっていませんが\nがんばりやさん が いうには\lおかねを ためておくと いい とのことです\pきになる ひとは とうじつ\nカイナシティに いくと いいでしょうね\pいじょう\n『ポケモン ニュース』でした"
	.byte EOS
	.if (. - gPokeNewsTextSlateport_Upcoming) != 0xc1
	.error "gPokeNewsTextSlateport_Upcoming must retain its original byte length"
	.endif
