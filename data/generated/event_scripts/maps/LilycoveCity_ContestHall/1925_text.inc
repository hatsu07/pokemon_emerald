	@ data/maps/LilycoveCity_ContestHall/scripts.inc:340 LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife
	.globl gText_Rom_207D12
gText_Rom_207D12: @ 0x08207D12
	.string "やだあ！\pわたしの ズバットちゃんの\nきゅうけつが あんまり すてきで\lつづけて なんども だしてたら\lなんか がっかり されちゃってるー！$"
	.if (. - gText_Rom_207D12) > 0x47
	.error "gText_Rom_207D12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207D12) < 0x47
	.space 0x47 - (. - gText_Rom_207D12)
	.endif
