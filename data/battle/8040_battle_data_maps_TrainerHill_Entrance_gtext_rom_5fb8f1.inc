	@ src/strings.c:1113 gText_TimeBoard
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_TimeBoard
gText_TimeBoard: @ 0x085FB8E3
	.string "タイムボード{EOS}"
	.if (. - gText_TimeBoard) != 0x7
	.error "gText_TimeBoard must retain its original byte length"
	.endif
	.globl gText_Rom_5FB8EA
gText_Rom_5FB8EA: @ 0x085FB8EA
	@ Decoded text from ROM range: offset=0x5FB8EA, size=0x7
	.string "クリアタイム{EOS}"
	.globl gText_Rom_5FB8F1

	@ data/maps/TrainerHill_Entrance/scripts.inc:358 TrainerHill_Entrance_Text_ChallengeTime
	.globl gText_Rom_5FB8F1
gText_Rom_5FB8F1: @ 0x085FB8F1
	.string "{STR_VAR_1}ふん {STR_VAR_2}びょう {STR_VAR_3}{EOS}"
	.if (. - gText_Rom_5FB8F1) > 0xe
	.error "gText_Rom_5FB8F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FB8F1) < 0xe
	.space 0xe - (. - gText_Rom_5FB8F1)
	.endif
	@ analyzed canonical ROM range 0x085FB8FF-0x085FB901
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xA2, 0xC0, 0xFF
