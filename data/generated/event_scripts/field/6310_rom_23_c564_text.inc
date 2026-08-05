	@ field-script:0x23C42C FieldScriptText_23C564
	.globl gText_Rom_23C564
gText_Rom_23C564: @ 0x0823C564
	.string "わし　うみのいえ　の　オヤジ！\nひとよんで　うみサン！\pとにかく　あつい　ポケモンしょうぶを\nみることが　だいすき　なんだよねー！\pキミもねー　あつーい　ハートで\nここに　いる　トレーナーぜんいんに\lかてたら　いいものを　あげるよー"
	.byte EOS
	.if (. - gText_Rom_23C564) > 0x75
	.error "gText_Rom_23C564 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C564) < 0x75
	.space 0x75 - (. - gText_Rom_23C564)
	.endif
