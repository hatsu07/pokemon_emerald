	@ data/text/pokemon_news.inc:30 gPokeNewsTextSlateport_Ending
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gPokeNewsTextSlateport_Ending
gPokeNewsTextSlateport_Ending: @ 0x08254689
	.string "こんにちは\n『ポケモン ニュース』の じかんです\pおまたせ しました!\pカイナシティの がんばりやさんが\nいちばで ものすごく がんばっています!\pいまなら タウリンや リゾチウムが\nほかよりも やすく かえるそうです!\pがんばりやさん が いうには まだまだ\nしょうひんは のこって いるそうです!\pあなたも カイナシティで かいものを\nたのしんでは いかがで しょうか?\pいじょう\n『ポケモン ニュース』でした"
	.byte EOS
	.if (. - gPokeNewsTextSlateport_Ending) != 0xd0
	.error "gPokeNewsTextSlateport_Ending must retain its original byte length"
	.endif
