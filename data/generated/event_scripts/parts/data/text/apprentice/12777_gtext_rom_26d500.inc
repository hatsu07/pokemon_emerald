	@ data/text/apprentice.inc:88 gText_ApprenticeRejectTeaching3
	.globl gText_Rom_26D500
gText_Rom_26D500: @ 0x0826D500
	.string "やっぱり…… そうですよね\nあたし なんて ほんとに\lつまらない おんなのこで……\pでも もしかしたら って おもって……\nかんがえなおして なんて くれませんよね?\pけど やっぱり あきらめられない\nうんが いい うちに おねがいしよう!\l……そうだんに のって もらえますか?"
	.byte EOS
	.if (. - gText_Rom_26D500) > 0x8d
	.error "gText_Rom_26D500 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D500) < 0x8d
	.space 0x8d - (. - gText_Rom_26D500)
	.endif
