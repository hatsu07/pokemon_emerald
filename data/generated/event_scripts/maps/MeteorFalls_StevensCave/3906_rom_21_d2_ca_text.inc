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
	@ data/maps/MeteorFalls_StevensCave/scripts.inc:42 MeteorFalls_StevensCave_Text_StevenDefeat (+1 aliases)
	.globl gText_Rom_21D2B0
gText_Rom_21D2B0: @ 0x0821D2B0
	.string "きみは……\nこれほどまでに つよくなって いたのか"
	.byte EOS
	.if (. - gText_Rom_21D2B0) > 0x1a
	.error "gText_Rom_21D2B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21D2B0) < 0x1a
	.space 0x1a - (. - gText_Rom_21D2B0)
	.endif
	@ data/maps/MeteorFalls_StevensCave/scripts.inc:46 MeteorFalls_StevensCave_Text_MyPredictionCameTrue
	.globl gText_Rom_21D2CA
gText_Rom_21D2CA: @ 0x0821D2CA
	.string "ダイゴ『そういえば……\nムロ タウンの いしのどうくつで\lはじめて あった ときから\pいずれ きみは チャンピオンに\nなるような きが していた\pボクの よそうは\nだいたい いつも あたるんだよ\pじゃあ……\nつぎに きみが むかうのは……\p…… …… ……\n…… …… ……\pふふふ さすがの ボクも\nそんなこと までは わからないな"
	.byte EOS
	.if (. - gText_Rom_21D2CA) > 0xa8
	.error "gText_Rom_21D2CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21D2CA) < 0xa8
	.space 0xa8 - (. - gText_Rom_21D2CA)
	.endif
	@ Embedded ROM bytes: file offset 0x21D372, size 0x38
	.byte 0x04, 0x87, 0xD3, 0x21, 0x08, 0x03, 0x91, 0xD3, 0x21, 0x08, 0x02, 0x9D, 0xD3, 0x21, 0x08, 0x05
	.byte 0xA7, 0xD3, 0x21, 0x08, 0x00, 0x89, 0x40, 0x00, 0x00, 0xBB, 0x5D, 0x24, 0x08, 0x00, 0x00, 0x04
	.byte 0x90, 0x5D, 0x24, 0x08, 0x25, 0x16, 0x00, 0x25, 0x5D, 0x01, 0x02, 0x97, 0x40, 0x00, 0x00, 0x30
	.byte 0x5C, 0x24, 0x08, 0x00, 0x00, 0xA6, 0x06, 0x02
