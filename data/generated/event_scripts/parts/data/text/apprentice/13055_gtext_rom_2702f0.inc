	@ data/text/apprentice.inc:499 gText_ApprenticeWhichMonFirst3
	.globl gText_Rom_2702F0
gText_Rom_2702F0: @ 0x082702F0
	.string "{PLAYER}さん いつも\nそうだん ばかりで すみません……\lあたし じしんが なくって\l{PLAYER}さんが いないと……!\pあの ポケモンの じゅんばん って……\nどうすれば いいと おもいますか?\pあたし なんかが こだわっても\nしかたが ないかも しれません けど\lどうしても きめられなくて……\pどの ポケモンを 1ばん\nせんとうに すれば よいんでしょうか!"
	.byte EOS
	.if (. - gText_Rom_2702F0) > 0xb1
	.error "gText_Rom_2702F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2702F0) < 0xb1
	.space 0xb1 - (. - gText_Rom_2702F0)
	.endif
