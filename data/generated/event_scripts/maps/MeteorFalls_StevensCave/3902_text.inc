	@ data/maps/MeteorFalls_StevensCave/scripts.inc:29 MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst
	.globl gText_Rom_21D206
gText_Rom_21D206: @ 0x0821D206
	.string "ダイゴ『へぇ {PLAYER}{KUN}\nボクが ここにいるって よく わかったね\pもしかして きみ…… ボクを\nただの いしマニアだと おもってる?\p……いや トクサネの うちゅうセンターで\nいっしょに たたかったから\pボクが どれくらい つよいのか\nきみだって しってるはず だよね\pよし {PLAYER}{KUN}\pほんきで しょうぶ するなら\nかくごして くれよな!"
	.byte EOS
	.if (. - gText_Rom_21D206) > 0xaa
	.error "gText_Rom_21D206 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21D206) < 0xaa
	.space 0xaa - (. - gText_Rom_21D206)
	.endif
