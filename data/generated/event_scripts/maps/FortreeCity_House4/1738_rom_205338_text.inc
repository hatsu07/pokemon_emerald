	@ data/maps/FortreeCity_House4/scripts.inc:80 FortreeCity_House4_Text_Wingull (+1 aliases)
	.globl gText_Rom_205338
gText_Rom_205338: @ 0x08205338
	.string "キャモメ『ぴひょー!{EOS}"
	.if (. - gText_Rom_205338) > 0xb
	.error "gText_Rom_205338 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205338) < 0xb
	.space 0xb - (. - gText_Rom_205338)
	.endif
	@ analyzed canonical ROM range 0x08205343-0x08205368
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08205343: @ 0x08205343
	.byte 0x00
.globl EventScript_JP_08205344
EventScript_JP_08205344: @ 0x08205344
	loadword 0x00, gText_Rom_205369
	callstd 0x02
	end
.globl EventScript_JP_0820534D
EventScript_JP_0820534D: @ 0x0820534D
	loadword 0x00, gText_Rom_2053A4
	callstd 0x02
	end
.globl EventScript_JP_08205356
EventScript_JP_08205356: @ 0x08205356
	lock
	faceplayer
	waitse
	playmoncry 0x0120, 0x0000
	loadword 0x00, gText_Rom_2053E4
	callstd 0x04
	waitmoncry
	release
	end
