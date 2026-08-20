	@ data/maps/LilycoveCity/scripts.inc:444 LilycoveCity_Text_MayGoingBackToLittleroot
	.globl gText_Rom_1E080D
gText_Rom_1E080D: @ 0x081E080D
	.string "ハルカ『あたし そろそろ\nミシロタウンに かえる つもりなの\pいろいろ ポケモン つかまえて\nずかんも けっこう できてきたから\lおとうさんに みせるんだ!{EOS}"
	.if (. - gText_Rom_1E080D) > 0x4f
	.error "gText_Rom_1E080D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E080D) < 0x4f
	.space 0x4f - (. - gText_Rom_1E080D)
	.endif
