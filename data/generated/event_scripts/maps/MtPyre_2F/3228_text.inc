	@ data/maps/MtPyre_2F/scripts.inc:67 MtPyre_2F_Text_LukeIntro (+1 aliases)
	.globl gText_Rom_2163A5
gText_Rom_2163A5: @ 0x082163A5
	.string "テル『きもだめし するんだ!\nぼくの かっこいい ところ みれば\lかのじょ もっと ほれるからね!\pそうだ! きみを たおして\nかっこいい ところ みせちゃおう!$"
	.if (. - gText_Rom_2163A5) > 0x52
	.error "gText_Rom_2163A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2163A5) < 0x52
	.space 0x52 - (. - gText_Rom_2163A5)
	.endif
