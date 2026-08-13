	@ data/maps/MossdeepCity_Gym/scripts.inc:525 MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons (+1 aliases)
	.globl gText_Rom_20C283
gText_Rom_20C283: @ 0x0820C283
	.string "フウ『また ぼくたちと……\nラン『また あたしたちと……\pフウ『しょうぶを しに きてくれたんだね\nラン『しょうぶを しに きてくれたんだね\pフウ『でも……\nラン『あなた たたかえる ポケモンを\pフウ『1ひきしか もって いないよ!\nラン『1ひきしか もって いないわ!\pフウ『できれば 2ひき いじょうの\nラン『ポケモンを もって また きてね!$"
	.if (. - gText_Rom_20C283) > 0xaf
	.error "gText_Rom_20C283 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C283) < 0xaf
	.space 0xaf - (. - gText_Rom_20C283)
	.endif
	@ analyzed canonical ROM range 0x0820C332-0x0820C36B
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820C332: @ 0x0820C332
	.byte 0x00
.globl EventScript_JP_0820C333
EventScript_JP_0820C333: @ 0x0820C333
	lock
	faceplayer
	bufferleadmonspeciesname 0x00
	loadword 0x00, gText_Rom_20C36C
	callstd 0x04
	specialvar_ 0x800D, 0x0115
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820C359
	loadword 0x00, gText_Rom_20C37B
	callstd 0x04
	release
	end
EventScript_0820C359: @ 0x0820C359
EventScript_JP_0820C359: @ 0x0820C359
	loadword 0x00, gText_Rom_20C39B
	callstd 0x04
	release
	end
.globl EventScript_JP_0820C363
EventScript_JP_0820C363: @ 0x0820C363
	loadword 0x00, gText_Rom_20C3B0
	callstd 0x02
	end
