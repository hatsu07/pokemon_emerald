	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:80 LilycoveCity_CoveLilyMotel_2F_Text_GirlsAreCute
	.globl gText_Rom_205A27
gText_Rom_205A27: @ 0x08205A27
	.string "うきわガール かわいい でしょ!\nうきわガールと しょうぶ なんて……\pくー! たまらんー!\pふたごちゃん かわいい でしょ!\nふたごちゃんと 2たい2 なんて……\pくー! たまらんー!$"
	.if (. - gText_Rom_205A27) > 0x5e
	.error "gText_Rom_205A27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205A27) < 0x5e
	.space 0x5e - (. - gText_Rom_205A27)
	.endif
