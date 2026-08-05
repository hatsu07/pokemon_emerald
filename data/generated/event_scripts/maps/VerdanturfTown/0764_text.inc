	@ data/maps/VerdanturfTown/scripts.inc:64 VerdanturfTown_Text_ManTryingToDigTunnel
	.globl gText_Rom_1E60F0
gText_Rom_1E60F0: @ 0x081E60F0
	.string "わたしの パパが いってたの\pこの トンネルって おーきな おとに\nはんのうして さわぎだす おくびょうな\lポケモンが いっぱい なんだって!\pだから かいはつ こうじ やめたんだけど\nおとこの ひとが ひとりで\lトンネルを ほろうと してるんだって!$"
	.if (. - gText_Rom_1E60F0) > 0x7f
	.error "gText_Rom_1E60F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E60F0) < 0x7f
	.space 0x7f - (. - gText_Rom_1E60F0)
	.endif
