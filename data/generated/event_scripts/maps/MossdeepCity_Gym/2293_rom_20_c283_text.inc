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
sAnalyzedEventData_0820C332: @ 0x0820C332
EventScript_0820C332: @ 0x0820C332
	.byte 0x00
EventScript_JP_0820C333: @ 0x0820C333
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: bufferleadmonspeciesname
	.byte 0x7E
	.byte 0x00
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820C36C @ gText_Rom_20C36C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0115
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820C359 @ EventScript_JP_0820C359
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820C37B @ gText_Rom_20C37B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_0820C359: @ 0x0820C359
EventScript_JP_0820C359: @ 0x0820C359
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820C39B @ gText_Rom_20C39B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820C363: @ 0x0820C363
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820C3B0 @ gText_Rom_20C3B0
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
