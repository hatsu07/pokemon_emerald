	@ data/text/pokemon_news.inc:141 gPokeNewsTextBlendMaster_Ongoing
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gPokeNewsTextBlendMaster_Ongoing
gPokeNewsTextBlendMaster_Ongoing: @ 0x08254BE4
	.string "こんにちは\n『ポケモン ニュース』の じかんです\pポロックを つくっている みなさんへ\nビッグニュースが はいって きました!\pあの でんせつの ブレンドめいじんが\nついに あらわれました!\pミナモシティの コンテストかいじょうで\lきのみブレンダーを まわしています!\pすばらしい ポロックを つくりたい かたや\nめいじんの テクニックを みたい かたは\lミナモシティへ いきましょう!\pいじょう\n『ポケモン ニュース』でした"
	.byte EOS
	.if (. - gPokeNewsTextBlendMaster_Ongoing) != 0xd6
	.error "gPokeNewsTextBlendMaster_Ongoing must retain its original byte length"
	.endif
