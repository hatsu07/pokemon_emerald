	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:320 MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel
	.globl gText_Rom_20D3DA
gText_Rom_20D3DA: @ 0x0820D3DA
	.string "ダイゴ『{PLAYER}{KUN} そこにある\nよこくじょうは もう よんだかい？\pマグマだんは このしまに ある\nロケットねんりょうを ねらっている!\pなにに つかうのか しらないけど\nかれらに わたす わけには いかないよ!\pボクは もうすこし ここで\nみはって いるから きみは まちでも\lけんぶつ してきたら どうかな$"
	.if (. - gText_Rom_20D3DA) > 0x9b
	.error "gText_Rom_20D3DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20D3DA) < 0x9b
	.space 0x9b - (. - gText_Rom_20D3DA)
	.endif
