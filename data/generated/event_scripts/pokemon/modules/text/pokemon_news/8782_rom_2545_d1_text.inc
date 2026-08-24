	@ data/text/pokemon_news.inc:16 gPokeNewsTextSlateport_Ongoing
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gPokeNewsTextSlateport_Ongoing
gPokeNewsTextSlateport_Ongoing: @ 0x082545D1
	.string "こんにちは\n『ポケモン ニュース』の じかんです\pおまたせ しました!\pカイナシティの がんばりやさんが\nいちばで ものすごく がんばっています!\pいまなら タウリンや リゾチウムが\nほかよりも やすく かえるそうです!\pあなたも カイナシティに いって\nおもう ぞんぶん かいものを\lたのしんで みては いかがで しょうか?\pいじょう\n『ポケモン ニュース』でした"
	.byte EOS
	.if (. - gPokeNewsTextSlateport_Ongoing) != 0xb8
	.error "gPokeNewsTextSlateport_Ongoing must retain its original byte length"
	.endif
