	@ data/maps/RustboroCity_Flat2_1F/scripts.inc:18 RustboroCity_Flat2_1F_Text_DevonWorkersLiveHere
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl RustboroCity_Flat2_1F_Text_DevonWorkersLiveHere
RustboroCity_Flat2_1F_Text_DevonWorkersLiveHere: @ 0x08203FB6
	.string "ここには デボン コーポレーションの\nしゃいんの みなさんが すんでるのですよ{EOS}"
	.if (. - RustboroCity_Flat2_1F_Text_DevonWorkersLiveHere) != 0x28
	.error "RustboroCity_Flat2_1F_Text_DevonWorkersLiveHere must retain its original byte length"
	.endif
	@ data/maps/RustboroCity_Flat2_1F/scripts.inc:21 RustboroCity_Flat2_1F_Text_Skitty
	.globl RustboroCity_Flat2_1F_Text_Skitty
RustboroCity_Flat2_1F_Text_Skitty: @ 0x08203FDE
	.string "エネコ『ぎゃー!!{EOS}"
	.if (. - RustboroCity_Flat2_1F_Text_Skitty) > 0xa
	.error "RustboroCity_Flat2_1F_Text_Skitty may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Flat2_1F_Text_Skitty) < 0xa
	.space 0xa - (. - RustboroCity_Flat2_1F_Text_Skitty)
	.endif
	@ analyzed canonical ROM range 0x08203FE8-0x0820402A
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08203FE8: @ 0x08203FE8
	.byte 0x00
.globl EventScript_JP_08203FE9
EventScript_JP_08203FE9: @ 0x08203FE9
	loadword 0x00, RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays
	callstd 0x02
	end
.globl EventScript_JP_08203FF2
EventScript_JP_08203FF2: @ 0x08203FF2
	lock
	faceplayer
	checkflag 0x00D5
	goto_if 0x01, EventScript_JP_08204021
	loadword 0x00, RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt
	callstd 0x04
	setorcopyvar 0x8000, 0x000C
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x00D5
	release
	end
EventScript_JP_08204021: @ 0x08204021
	loadword 0x00, RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo
	callstd 0x04
	release
	end
