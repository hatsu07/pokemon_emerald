	@ data/maps/LilycoveCity_DepartmentStore_3F/scripts.inc:60 LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_20AADA
gText_Rom_20AADA: @ 0x0820AADA
	.string "じょうぶな ポケモンに\nなって ほしいからね\pブロムヘキシンで ぼうぎょりょくを あげるか\nキトサンで とくぼうを あげるか\lいま かんがえている ところ なんだ$"
	.if (. - gText_Rom_20AADA) != 0x52
	.error "gText_Rom_20AADA must retain its original byte length"
	.endif
