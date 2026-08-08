	@ data/text/pokemon_news.inc:141 gPokeNewsTextBlendMaster_Ongoing
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_254BE4
gText_Rom_254BE4: @ 0x08254BE4
	.string "こんにちは\n『ポケモン ニュース』の じかんです\pポロックを つくっている みなさんへ\nビッグニュースが はいって きました!\pあの でんせつの ブレンドめいじんが\nついに あらわれました!\pミナモシティの コンテストかいじょうで\lきのみブレンダーを まわしています!\pすばらしい ポロックを つくりたい かたや\nめいじんの テクニックを みたい かたは\lミナモシティへ いきましょう!\pいじょう\n『ポケモン ニュース』でした"
	.byte EOS
	.if (. - gText_Rom_254BE4) != 0xd6
	.error "gText_Rom_254BE4 must retain its original byte length"
	.endif
