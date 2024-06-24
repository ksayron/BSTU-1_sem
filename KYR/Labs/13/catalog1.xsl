<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
<html>
<head><title>task1</title>
</head>
<body>
<table border="1">
<tr bgcolor="brown">
<th>Название товара</th>
<th>Цена</th></tr>
<xsl:for-each select="storage/goods">
<xsl:sort select="price" order="ascending"/>
<tr>
<td><xsl:value-of select="name"/></td>
<td><xsl:value-of select="price"/></td>
</tr>
</xsl:for-each>
</table>
</body>
</html>
</xsl:template>
</xsl:stylesheet>