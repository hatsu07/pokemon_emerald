	@ data/maps/MeteorFalls_StevensCave/scripts.inc:29 MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst
	.globl MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst
MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst: @ 0x0821D206
	.string "ダイゴ『へぇ {PLAYER}{KUN}\nボクが ここにいるって よく わかったね\pもしかして きみ…… ボクを\nただの いしマニアだと おもってる?\p……いや トクサネの うちゅうセンターで\nいっしょに たたかったから\pボクが どれくらい つよいのか\nきみだって しってるはず だよね\pよし {PLAYER}{KUN}\pほんきで しょうぶ するなら\nかくごして くれよな!"
	.byte EOS
	.if (. - MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst) > 0xaa
	.error "MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst may not grow beyond its original slot"
	.endif
	.if (. - MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst) < 0xaa
	.space 0xaa - (. - MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst)
	.endif
	@ data/maps/MeteorFalls_StevensCave/scripts.inc:42 MeteorFalls_StevensCave_Text_StevenDefeat (+1 aliases)
	.globl MeteorFalls_StevensCave_Text_StevenDefeat
MeteorFalls_StevensCave_Text_StevenDefeat: @ 0x0821D2B0
	.string "きみは……\nこれほどまでに つよくなって いたのか"
	.byte EOS
	.if (. - MeteorFalls_StevensCave_Text_StevenDefeat) > 0x1a
	.error "MeteorFalls_StevensCave_Text_StevenDefeat may not grow beyond its original slot"
	.endif
	.if (. - MeteorFalls_StevensCave_Text_StevenDefeat) < 0x1a
	.space 0x1a - (. - MeteorFalls_StevensCave_Text_StevenDefeat)
	.endif
	@ data/maps/MeteorFalls_StevensCave/scripts.inc:46 MeteorFalls_StevensCave_Text_MyPredictionCameTrue
	.globl MeteorFalls_StevensCave_Text_MyPredictionCameTrue
MeteorFalls_StevensCave_Text_MyPredictionCameTrue: @ 0x0821D2CA
	.string "ダイゴ『そういえば……\nムロ タウンの いしのどうくつで\lはじめて あった ときから\pいずれ きみは チャンピオンに\nなるような きが していた\pボクの よそうは\nだいたい いつも あたるんだよ\pじゃあ……\nつぎに きみが むかうのは……\p…… …… ……\n…… …… ……\pふふふ さすがの ボクも\nそんなこと までは わからないな"
	.byte EOS
	.if (. - MeteorFalls_StevensCave_Text_MyPredictionCameTrue) > 0xa8
	.error "MeteorFalls_StevensCave_Text_MyPredictionCameTrue may not grow beyond its original slot"
	.endif
	.if (. - MeteorFalls_StevensCave_Text_MyPredictionCameTrue) < 0xa8
	.space 0xa8 - (. - MeteorFalls_StevensCave_Text_MyPredictionCameTrue)
	.endif
	@ Embedded ROM bytes: file offset 0x21D372, size 0x38
	.byte 0x04, 0x87, 0xD3, 0x21, 0x08, 0x03, 0x91, 0xD3, 0x21, 0x08, 0x02, 0x9D, 0xD3, 0x21, 0x08, 0x05
	.byte 0xA7, 0xD3, 0x21, 0x08, 0x00, 0x89, 0x40, 0x00, 0x00, 0xBB, 0x5D, 0x24, 0x08, 0x00, 0x00, 0x04
	.byte 0x90, 0x5D, 0x24, 0x08, 0x25, 0x16, 0x00, 0x25, 0x5D, 0x01, 0x02, 0x97, 0x40, 0x00, 0x00, 0x30
	.byte 0x5C, 0x24, 0x08, 0x00, 0x00, 0xA6, 0x06, 0x02
